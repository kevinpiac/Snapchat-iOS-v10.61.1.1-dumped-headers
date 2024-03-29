//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCTextView;

@protocol SCTextViewDelegate <NSObject>
- (void)textViewDidChange:(SCTextView *)arg1;

@optional
- (_Bool)textField:(SCTextView *)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (void)textViewDidBeginEditing:(SCTextView *)arg1;
- (void)textViewDidEndEditing:(SCTextView *)arg1;
- (void)textViewDidMakeFirstEdit:(SCTextView *)arg1;
- (_Bool)textViewShouldBeginEditing:(SCTextView *)arg1;
- (_Bool)textViewShouldReturn:(SCTextView *)arg1;
@end

