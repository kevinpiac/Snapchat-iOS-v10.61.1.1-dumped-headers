//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCXRenderLayer, UIViewController;
@protocol SCMapDoodlePresenterDelegate, SCMapInstance;

@protocol SCMapDoodlePresenter <NSObject>
- (void)dismiss;
- (void)presentDoodleCreatorOnViewController:(UIViewController *)arg1 mapInstance:(id <SCMapInstance>)arg2 renderLayer:(SCXRenderLayer *)arg3 delegate:(id <SCMapDoodlePresenterDelegate>)arg4;
@end
