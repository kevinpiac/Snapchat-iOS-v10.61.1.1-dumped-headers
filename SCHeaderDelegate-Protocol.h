//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCHeaderDelegate <NSObject>

@optional
- (void)fadeHeaderForNotification:(_Bool)arg1;
- (void)headerTextFieldTextDidEditingDidEndOnExit;
- (void)headerTextFieldTextEditingChanged;
- (void)headerTextFieldTextEditingDidBegin;
- (void)headerTextFieldTextEditingDidEnd;
- (void)headerTextViewTextEditingDidBegin;
- (void)headerTextViewTextEditingDidEnd;
- (void)leftButtonPressed;
- (double)preferredLeftButtonWidth;
- (double)preferredRightButtonWidth;
- (void)rightButtonPressed;
- (void)xButtonPressed;
@end

