#!/usr/bin/env ruby

require 'yaml'

i = 0
code = ""

holidays = YAML.load_file("modules/holiday_jp/holidays_detailed.yml")
holidays.each do |k, v|
  i = i + 1
  code << <<~EOS
    static holidayjp_holiday h#{i} = {
        "#{v['date']}",
        #{v['date'].year.to_i},
        #{v['date'].month.to_i},
        #{v['date'].day.to_i},
        "#{v['week']}",
        "#{v['week_en']}",
        "#{v['name']}",
        "#{v['name_en']}"
    };
    holidayjp_hash_set(h, "#{k}", &h#{i});
EOS
end

content = File.read("holidayjp.h")
              .sub(/(\/\* AUTO GENERATED START \*\/)(?:.+)(\/\* AUTO GENERATED END \*\/)/m, "\\1\n#{code}\\2")
File.open("holidayjp.h", "w") do |f|
  f.write(content)
end