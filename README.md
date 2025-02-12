# LoadRunner Login Action Script

## Overview
This LoadRunner script automates the login process for a web application hosted at `http://testphp.vulnweb.com`. It simulates a user accessing the login page, entering credentials, and logging out.

## Script Workflow
1. **Set SSL Options:** Ensures secure communication.
2. **Add HTTP Headers:** Sets the `Accept-Language` header for requests.
3. **Navigate to Login Page:** Loads `login.php` and verifies the page contains expected text.
4. **Simulate User Think Time:** Introduces a delay to mimic real user behavior.
5. **Submit Login Credentials:** Sends username (`test`) and password (`test`) to `userinfo.php`.
6. **Validate Successful Login:** Checks if the response contains expected account details.
7. **Simulate User Think Time:** Adds another delay before logout.
8. **Logout:** Clicks the logout link and verifies successful logout.

## Key Functions
- `web_set_sockets_option`: Configures socket settings.
- `web_add_auto_header`: Adds HTTP headers automatically.
- `web_reg_find`: Validates response content.
- `web_url`: Loads a web page.
- `web_submit_form`: Submits login credentials.
- `web_link`: Clicks on the logout link.
- `lr_think_time`: Introduces a pause to simulate real-world interactions.

## Prerequisites
- LoadRunner must be installed and configured.

## Usage
1. Import the script into LoadRunner.
2. Configure `think_time` as needed.
3. Run the script and analyze results.
