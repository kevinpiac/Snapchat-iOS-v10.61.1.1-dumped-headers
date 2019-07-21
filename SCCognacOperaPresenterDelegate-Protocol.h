//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCCognacOperaPlayerItem, SCCognacOperaPresenter, SCCognacOperaSessionParticipantInfo;

@protocol SCCognacOperaPresenterDelegate <NSObject>
- (void)cognacOperaPresenter:(SCCognacOperaPresenter *)arg1 didFinishPresentViewerWithPlayerItem:(SCCognacOperaPlayerItem *)arg2;
- (void)cognacOperaPresenter:(SCCognacOperaPresenter *)arg1 willDismissViewerWithParticipantInfo:(SCCognacOperaSessionParticipantInfo *)arg2;
- (void)cognacOperaPresenterDidBeginPresentViewer:(SCCognacOperaPresenter *)arg1;
- (void)cognacOperaPresenterDidFinishDismissViewer:(SCCognacOperaPresenter *)arg1;
@end
