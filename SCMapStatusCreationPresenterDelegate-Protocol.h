//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCMapBitmojiSticker, UIView;
@protocol SCMapStatusCreationPresenting;

@protocol SCMapStatusCreationPresenterDelegate <NSObject>
- (void)mapStatusCreationPresenter:(id <SCMapStatusCreationPresenting>)arg1 didSetStatusWithSticker:(SCMapBitmojiSticker *)arg2 speechText:(NSString *)arg3 statusId:(NSString *)arg4 showPassportNotification:(_Bool)arg5;
- (void)mapStatusCreationPresenter:(id <SCMapStatusCreationPresenting>)arg1 wantsToPresentStoryForUserId:(NSString *)arg2 fromBaseView:(UIView *)arg3;
- (void)mapStatusCreationPresenter:(id <SCMapStatusCreationPresenting>)arg1 wantsToShowProfileForUserId:(NSString *)arg2;
- (void)mapStatusCreationPresenterDidDeleteMostRecentStatus:(id <SCMapStatusCreationPresenting>)arg1;
- (void)mapStatusCreationPresenterWantsToDismiss:(id <SCMapStatusCreationPresenting>)arg1;
@end

