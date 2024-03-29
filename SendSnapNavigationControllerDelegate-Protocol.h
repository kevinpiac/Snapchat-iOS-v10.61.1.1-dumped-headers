//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, PreviewViewController;

@protocol SendSnapNavigationControllerDelegate <NSObject>
- (void)didCancelFromPreview:(PreviewViewController *)arg1;
- (void)didSendSnaps:(NSArray *)arg1 postToStory:(_Bool)arg2;

@optional
- (void)didComeFromCameraWithoutSendingSnap;
- (void)didPostNewlyCreatedGroupStoriesWithMetadata:(NSArray *)arg1;
- (void)didPostStory;
- (void)didSaveSnapWithParameters:(NSDictionary *)arg1;
- (void)didSendChatMessage;
- (void)didSendDiscoverSharedMessageWithParameters:(NSDictionary *)arg1;
- (void)didSendToGallery;
- (void)willPostStory;
@end

