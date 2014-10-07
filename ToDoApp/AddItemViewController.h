//
//  AddItemViewController.h
//  ToDoApp
//
//  Created by Alexander Kuliev on 10/7/14.
//  Copyright (c) 2014 Alexander Kuliev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddItemViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *itemText;
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;


- (IBAction)save:(id)sender;
- (IBAction)cancel:(id)sender;

@end
