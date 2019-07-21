//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCLens, UIViewController;
@protocol SCLensLiveLensPreviewCameraPresenterDelegate, SCLensLiveLensPreviewReplyParameters;

@protocol SCLensLiveLensPreviewCameraPresenterProtocol <NSObject>
@property(nonatomic) __weak id <SCLensLiveLensPreviewCameraPresenterDelegate> delegate;
- (void)dismissCameraViewControllerAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)presentCameraViewControllerFromViewController:(UIViewController *)arg1 withLens:(SCLens *)arg2 replyParameters:(id <SCLensLiveLensPreviewReplyParameters>)arg3;
- (void)updateLens:(SCLens *)arg1;
@end
