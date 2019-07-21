//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCognacWVJBRequestOperation.h"

@class SCCognacNudgeFriendPresenter, SCCognacOperaDataSource, SCCognacSwipeTransitionPresenter, UIViewController;
@protocol SCCognacRingFriendsViewPresenting;

@interface SCCognacRingFriendsRequestOperation : SCCognacWVJBRequestOperation
{
    id <SCCognacRingFriendsViewPresenting> _ringFriendsViewPresenter;
    UIViewController *_presentedViewController;
    SCCognacNudgeFriendPresenter *_nudgeSingleFriendPresenter;
    SCCognacSwipeTransitionPresenter *_friendsPickerPresenter;
    SCCognacOperaDataSource *_dataSource;
}

- (void).cxx_destruct;
- (_Bool)_validateState;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak SCCognacSwipeTransitionPresenter *friendsPickerPresenter; // @synthesize friendsPickerPresenter=_friendsPickerPresenter;
@property(nonatomic) __weak SCCognacNudgeFriendPresenter *nudgeSingleFriendPresenter; // @synthesize nudgeSingleFriendPresenter=_nudgeSingleFriendPresenter;
@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(nonatomic) __weak id <SCCognacRingFriendsViewPresenting> ringFriendsViewPresenter; // @synthesize ringFriendsViewPresenter=_ringFriendsViewPresenter;
- (void)run;

@end

