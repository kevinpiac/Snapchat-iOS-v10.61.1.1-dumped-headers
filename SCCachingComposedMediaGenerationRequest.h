//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCachingMediaRequest-Protocol.h"
#import "SCProgressReporting-Protocol.h"

@class NSString, SCSentinel;
@protocol SCProgressReceiving, SCProgressReporting><SCCanceling;

@interface SCCachingComposedMediaGenerationRequest : NSObject <SCCachingMediaRequest, SCProgressReporting>
{
    SCSentinel *_sentinel;
    id <SCProgressReceiving> _progressReceiver;
    id <SCProgressReporting><SCCanceling> _downloadRequest;
}

- (void).cxx_destruct;
- (void)cancel;
@property(retain, nonatomic) id <SCProgressReporting><SCCanceling> downloadRequest; // @synthesize downloadRequest=_downloadRequest;
- (id)init;
- (_Bool)isCancelled;
@property(nonatomic) __weak id <SCProgressReceiving> progressReceiver; // @synthesize progressReceiver=_progressReceiver;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

