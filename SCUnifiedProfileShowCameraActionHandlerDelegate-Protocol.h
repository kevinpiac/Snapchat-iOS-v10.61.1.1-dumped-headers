//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCSnapchatter, SCUnifiedProfileShowCameraActionHandler;

@protocol SCUnifiedProfileShowCameraActionHandlerDelegate <NSObject>
- (_Bool)showCameraActionHandler:(SCUnifiedProfileShowCameraActionHandler *)arg1 canHandleShowCameraForGroupId:(NSString *)arg2;
- (_Bool)showCameraActionHandler:(SCUnifiedProfileShowCameraActionHandler *)arg1 canHandleShowCameraForSnapchatter:(SCSnapchatter *)arg2;
- (void)showCameraActionHandler:(SCUnifiedProfileShowCameraActionHandler *)arg1 showCameraForGroupId:(NSString *)arg2;
- (void)showCameraActionHandler:(SCUnifiedProfileShowCameraActionHandler *)arg1 showCameraForSnapchatter:(SCSnapchatter *)arg2;
@end

