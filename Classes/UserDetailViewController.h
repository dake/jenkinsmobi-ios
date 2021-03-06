// Copyright (C) 2012 LMIT Limited
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and 
// limitations under the License.

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import <MessageUI/MFMailComposeViewController.h>
#import <AddressBook/ABAddressBook.h>
#import <AddressBook/ABPerson.h>
#import <AddressBook/ABGroup.h>
#import <AddressBook/ABMultiValue.h>
#import "LoadingView.h"
#import "HudsonUser.h"

@interface UserDetailViewController : UITableViewController {

	HudsonUser* currentUser;
	bool loaded;
	LoadingView* loadingView;
}

- (id)initWithStyle:(UITableViewStyle)style andUser:(HudsonUser*)user;

@end
