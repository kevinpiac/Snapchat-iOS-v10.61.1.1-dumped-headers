//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileRowController.h"

@class NSString, SCEmbeddedMapViewLoggingSession, SCMapPersonLocation, SCUserSession;
@protocol SCMiniProfileMapRowControllerDelegate;

@interface SCMiniProfileMapRowController : SCMiniProfileRowController
{
    SCMapPersonLocation *_personLocation;
    SCUserSession *_userSession;
    id <SCMiniProfileMapRowControllerDelegate> _delegate;
    SCEmbeddedMapViewLoggingSession *_loggingSession;
    NSString *_accessibilityIdentifier;
}

- (void).cxx_destruct;
- (Class)cellClass;
- (double)cellHeight;
- (void)didSelectCell;
- (id)initWithPersonLocation:(id)arg1 userSession:(id)arg2 delegate:(id)arg3 loggingSession:(id)arg4 accessibilityIdentifier:(id)arg5;
- (void)willDisplayCell:(id)arg1;

@end

