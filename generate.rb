#!/usr/bin/env ruby

require 'yaml'

i = 0
code = ""

holidays = YAML.load_file("modules/holiday_jp/holidays_detailed.yml")
holidays.each do |k, v|
  i = i + 1
  code << <<EOS
    static holidayjp_holiday h#{i} = {
        "#{v['date']}",
        "#{v['week']}",
        "#{v['week_en']}",
        "#{v['name']}",
        "#{v['name_en']}"
    };
    holidayjp_hash_set(h, "#{k}", &h#{i});  
EOS
end

content = File.read("holidayjp.h")
              .sub(/(\s+\/\* AUTO GENERATED START \*\/\s+)(?:.+)(\s+\/\* AUTO GENERATED END \*\/\s+)/, "\\1#{code}\\2")
File.open("holidayjp.h", "w") do |f|
  f.write(content)
end