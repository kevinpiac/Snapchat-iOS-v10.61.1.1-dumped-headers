//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCScannableInfo, SCSnapcodeTabCardView;

@protocol SCSnapcodeTabCardViewViewDelegate <NSObject>

@optional
- (void)snapcodeTabCard:(SCSnapcodeTabCardView *)arg1 createScannable:(SCScannableInfo *)arg2;
- (void)snapcodeTabCard:(SCSnapcodeTabCardView *)arg1 editScannable:(SCScannableInfo *)arg2;
- (void)snapcodeTabCard:(SCSnapcodeTabCardView *)arg1 showAlert:(NSString *)arg2;
@end

