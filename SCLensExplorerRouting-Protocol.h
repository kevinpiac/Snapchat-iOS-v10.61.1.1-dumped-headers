//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCLensExplorerInteractiveTransitionCoordinator-Protocol.h"

@class NSArray, NSData, NSString, SCLens, SCLensChallengesSectionItem, SCLensExplorerLensItem, SCLensExplorerLensItemCreator, UIViewController;
@protocol SCLensExplorerRouterDelegate;

@protocol SCLensExplorerRouting <NSObject, SCLensExplorerInteractiveTransitionCoordinator>
@property(nonatomic) __weak id <SCLensExplorerRouterDelegate> delegate;
- (void)dismissIfNeededAnimated:(_Bool)arg1;
- (void)dismissMusicLensChallengesViewController;
- (void)handleApplicationDidEnterBackground;
@property(readonly, nonatomic) _Bool isPresenting;
@property(readonly, nonatomic) _Bool isPresentingLensChallenges;
- (void)presentChallengesViewControllerWithChallengeId:(NSString *)arg1 fromViewController:(UIViewController *)arg2 entryPoint:(long long)arg3;
- (void)presentCreatorViewControllerWithCreator:(SCLensExplorerLensItemCreator *)arg1 fromViewController:(UIViewController *)arg2 sourcePageType:(long long)arg3;
- (void)presentCreatorViewControllerWithCreator:(SCLensExplorerLensItemCreator *)arg1 sourcePageType:(long long)arg2;
- (void)presentDebugViewControllerForStoryId:(NSString *)arg1 debugHtml:(NSString *)arg2 lastStreamToken:(NSData *)arg3;
- (void)presentLensChallengeCameraWithLens:(SCLens *)arg1;
- (void)presentLensChallengesDisclaimerAlert;
- (void)presentLensExplorerViewControllerFromViewController:(UIViewController *)arg1 touchableViews:(NSArray *)arg2 entryPoint:(long long)arg3;
- (void)presentLiveLensPreviewCameraWithLensItem:(SCLensExplorerLensItem *)arg1 lens:(SCLens *)arg2;
- (void)presentMusicLensChallengesViewControllerWithItem:(SCLensChallengesSectionItem *)arg1;
- (void)refreshSubscriptionSection;
@end

