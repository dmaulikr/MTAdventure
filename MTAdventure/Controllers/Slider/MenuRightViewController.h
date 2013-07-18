//
//  MenuRightViewController.h
//  MTAdventure
//
//  Created by eungJin on 6/14/13.
//  Copyright (c) 2013 rollintiger. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MenuRightViewController : UIViewController

- (IBAction)dismissBtn:(id)sender;

- (IBAction)oneD:(id)sender;
- (IBAction)twoD:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *oneDBtn;
@property (weak, nonatomic) IBOutlet UIButton *twoDBtn;
@end
