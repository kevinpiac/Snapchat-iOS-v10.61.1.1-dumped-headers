//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UITextField;
@protocol SCOnDemandGeofilterTableViewTextFieldCellDelegate;

@interface SCOnDemandGeofilterTableViewTextFieldCell : UITableViewCell <UITextFieldDelegate>
{
    UITextField *_textField;
    id <SCOnDemandGeofilterTableViewTextFieldCellDelegate> _cellDelegate;
    unsigned long long _characterLimit;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCOnDemandGeofilterTableViewTextFieldCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(nonatomic) unsigned long long characterLimit; // @synthesize characterLimit=_characterLimit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupWithViewModel:(id)arg1;
- (id)textField;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

