//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAttributedString, NSString, SCHeader, SCHeaderAccessoryView, UIColor, UIFont, UIImage;

@protocol SCHeaderDataSource <NSObject>
- (UIColor *)backgroundColorForHeader;
- (UIImage *)imageForLeftButtonInState:(unsigned long long)arg1;
- (UIImage *)imageForRightButtonInState:(unsigned long long)arg1;
- (UIColor *)textColorForHeader:(SCHeader *)arg1;
- (NSString *)titleForHeader:(SCHeader *)arg1;

@optional
- (double)additionalXOffsetForHeader;
- (double)additionalXOffsetForRightButton;
- (UIFont *)fontForHeader:(SCHeader *)arg1;
- (double)headerContentViewAdditionalHorizontalPadding;
- (UIImage *)imageForXButtonInState:(unsigned long long)arg1;
- (long long)maxLengthForHeaderTextField:(SCHeader *)arg1;
- (NSString *)placeHolderForHeaderTextField;
- (NSAttributedString *)placeholderAttributedString:(SCHeader *)arg1;
- (long long)returnKeyTypeForHeaderTextField:(SCHeader *)arg1;
- (_Bool)shouldEnableTextField:(SCHeader *)arg1;
- (_Bool)shouldEnableXButtonForTextField:(SCHeader *)arg1;
- (_Bool)shouldShowHeaderLabel:(SCHeader *)arg1;
- (UIColor *)textColorForPlaceholderInHeader:(SCHeader *)arg1;
- (UIColor *)tintColorForHeader:(SCHeader *)arg1;
- (NSString *)titleForTextFieldHeader:(SCHeader *)arg1;
- (SCHeaderAccessoryView *)viewForTitleInHeader:(SCHeader *)arg1;
@end

