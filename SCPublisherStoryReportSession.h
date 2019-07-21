//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaSession-Protocol.h"
#import "SCReportPageViewControllerDelegate-Protocol.h"

@class NSString, SCOperaViewController, SCUserSession;

@interface SCPublisherStoryReportSession : NSObject <SCReportPageViewControllerDelegate, SCOperaSession>
{
    SCOperaViewController *_operaVC;
    SCUserSession *_userSession;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)initWithOperaVC:(id)arg1 userSession:(id)arg2;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)reportPageViewControllerDidCancelAtLevel:(unsigned long long)arg1 additionalData:(id)arg2;
- (void)reportPageViewControllerDidSubmitReport:(id)arg1 reasonId:(id)arg2 additionalData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
