//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDate, NSString, UIDatePicker;
@protocol SCSearchFormsDatePickerViewControllerDelegate;

@interface SCSearchFormsDatePickerViewController : UIViewController
{
    NSDate *_selectedDate;
    NSString *_itemIdentifier;
    UIDatePicker *_datePicker;
    id <SCSearchFormsDatePickerViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_finishPickingDate:(id)arg1;
@property(nonatomic) __weak id <SCSearchFormsDatePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithPreselectedDate:(id)arg1 itemIdentifier:(id)arg2;
- (void)loadView;
- (void)viewDidLoad;

@end

