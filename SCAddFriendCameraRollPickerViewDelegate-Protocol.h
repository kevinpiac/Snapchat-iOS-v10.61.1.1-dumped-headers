//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCAddFriendCameraRollPickerView, SCSnapScannedData;

@protocol SCAddFriendCameraRollPickerViewDelegate <NSObject>
- (void)addFriendCameraRollPickerView:(SCAddFriendCameraRollPickerView *)arg1 didScanImageWithScannedData:(SCSnapScannedData *)arg2;
- (void)addFriendCameraRollPickerViewDidFinishScan:(SCAddFriendCameraRollPickerView *)arg1;
- (void)addFriendCameraRollPickerViewDidStartScan:(SCAddFriendCameraRollPickerView *)arg1;
- (_Bool)addFriendCameraRollPickerViewShouldScan:(SCAddFriendCameraRollPickerView *)arg1;
@end

