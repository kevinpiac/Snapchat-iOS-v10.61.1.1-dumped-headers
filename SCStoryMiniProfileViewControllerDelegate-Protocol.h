//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, SCStoryMiniProfileViewController;

@protocol SCStoryMiniProfileViewControllerDelegate <NSObject>
- (void)storyMiniProfileViewControllerDidTapActionButton:(SCStoryMiniProfileViewController *)arg1;
- (NSObject *)storyMiniProfileViewControllerOperaDataModelToPresent:(SCStoryMiniProfileViewController *)arg1;

@optional
- (void)storyMiniProfileViewControllerDidSelectOptionGetLiveUpdates:(SCStoryMiniProfileViewController *)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionHideStory:(SCStoryMiniProfileViewController *)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionInfoStory:(SCStoryMiniProfileViewController *)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionOptInNotifications:(SCStoryMiniProfileViewController *)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionOptOut:(SCStoryMiniProfileViewController *)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionSendStory:(SCStoryMiniProfileViewController *)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionShareStoryURL:(SCStoryMiniProfileViewController *)arg1;
- (void)storyMiniProfileViewControllerDismissedViewController:(SCStoryMiniProfileViewController *)arg1;
@end
