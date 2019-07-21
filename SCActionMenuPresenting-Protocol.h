//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"

@class NSString, UIViewController;
@protocol SCActionHandling, SCActionMenuPresenting, SCImageDownloading, SCUnifiedActionMenuDataProvider, SCUnifiedActionMenuPresenterDelegate;

@protocol SCActionMenuPresenting <NSObject, SCEventAnnouncing>
@property(nonatomic) __weak id <SCUnifiedActionMenuPresenterDelegate> delegate;
- (void)dismissMenuViewWithAnimation:(_Bool)arg1 completion:(void (^)(void))arg2;
- (id)initWithMenuViewDataProvider:(id <SCUnifiedActionMenuDataProvider>)arg1 actionHandler:(id <SCActionHandling>)arg2 imageDownloader:(id <SCImageDownloading>)arg3 sourcePageType:(NSString *)arg4;
- (void)popActionSheetView;
- (void)presentMenuViewWithPresentingViewController:(UIViewController *)arg1;
- (void)presentMenuViewWithPresentingViewController:(UIViewController *)arg1 completion:(void (^)(void))arg2;
- (void)presentNestedMenuView:(id <SCActionMenuPresenting>)arg1;
- (UIViewController *)presentedViewController;
- (UIViewController *)presentingViewController;
@end

