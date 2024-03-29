//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUploadURLCaching-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSMutableArray, NSString, SCUserSession;

@interface SCUploadURLCache : NSObject <SCUserSessionScoped, SCUploadURLCaching>
{
    SCUserSession *_userSession;
    NSMutableArray *_mediaUrls;
    _Bool _isRequestingFromServer;
}

- (void).cxx_destruct;
- (void)_fetchURLsFromServerIfNeeded;
- (void)_removeInvalidUrlsAndRequestMoreIfNeeded;
- (id)initWithUserSession:(id)arg1;
- (void)invalidate;
- (void)prefetchURLsIfNeeded;
- (id)uploadURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

