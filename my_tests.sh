

# Enable alias expansion
shopt -s expand_aliases
source /home/course_ps/u00/public/bashrc_xtra


# Clear the screen before starting tests
clear

# Create test input files
echo "Creating test files..."

# Test 1: Standard input
cat <<EOF > test1.txt
  abc   def ghi
jkl mno pqr
stu vwx yza
EOF

# Test 2: Extra spaces and new lines
cat <<EOF > test2.txt
abc    

  def   ghi 
   
jkl mno pqr 

stu    vwx  
yza   
EOF

# Test 3: Lowercase names
cat <<EOF > test3.txt
abc def ghi jkl mno pqr stu vwx yza
EOF

# Test 4: Names already in reverse order
cat <<EOF > test4.txt
yza vwx stu pqr mno jkl ghi def abc
EOF

# Test 5: File that does not exist (negative test case)
missing_file="test_missing.txt"

echo "Test cases created!"
echo "Starting tests..."

# Run tests
for i in {1..4}; do
    clear
    echo "Running names_list test$i.txt"
    read -p "(Pause from testing script) Press Enter to continue ... "
    ./names_list test$i.txt
done

# Test 5: Missing file scenario
clear
echo "Running names_list with a missing file (should produce an error)"
read -p "(Pause from testing script) Press Enter to continue ... "
./names_list "$missing_file"

#Test 6: No cmd input
clear
echo "Running names_list without command line input"
read -p "(Pause from testing script) Press Enter to continue ... "
./names_list

echo "All tests completed!"
