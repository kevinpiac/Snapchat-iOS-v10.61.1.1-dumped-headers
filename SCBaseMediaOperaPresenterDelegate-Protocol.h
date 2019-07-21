//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, SCBaseMediaOperaPresenter, SCOperaShareableMediaComponents, UIView;

@protocol SCBaseMediaOperaPresenterDelegate <NSObject>
- (void)baseMediaOperaPresenter:(SCBaseMediaOperaPresenter *)arg1 didTapFooterBarForMedia:(NSString *)arg2;
- (void)baseMediaOperaPresenter:(SCBaseMediaOperaPresenter *)arg1 didTapReportForMessage:(NSString *)arg2 shareableMediaComponents:(SCOperaShareableMediaComponents *)arg3;
- (void)baseMediaOperaPresenter:(SCBaseMediaOperaPresenter *)arg1 didTapSendForMessage:(NSString *)arg2;
- (void)baseMediaOperaPresenter:(SCBaseMediaOperaPresenter *)arg1 mediaFailsToDisplay:(NSDictionary *)arg2;
- (void)baseMediaOperaPresenter:(SCBaseMediaOperaPresenter *)arg1 pausedTimerForMessage:(NSString *)arg2;
- (void)baseMediaOperaPresenter:(SCBaseMediaOperaPresenter *)arg1 resumedTimerForMessage:(NSString *)arg2;
- (UIView *)baseMediaOperaPresenter:(SCBaseMediaOperaPresenter *)arg1 thumbnailViewForMedia:(NSString *)arg2 conversationId:(NSString *)arg3;
- (void)baseMediaOperaPresenterDidFinishPresentationAnimation:(SCBaseMediaOperaPresenter *)arg1;
- (void)baseMediaOperaPresenterFoundNothingToDisplay:(SCBaseMediaOperaPresenter *)arg1;
- (void)baseMediaOperaPresenterViewWillResignActive:(SCBaseMediaOperaPresenter *)arg1;
- (void)operaPresenterDidDisappear;
- (void)operaPresenterWillAppear;
@end
