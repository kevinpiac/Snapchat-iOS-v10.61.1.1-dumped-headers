//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSAUriServiceProvider-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol SCPerforming;

@interface SCLensUriServiceProvider : NSObject <LSAUriServiceProvider>
{
    id <SCPerforming> _performer;
    NSMutableDictionary *_schemes;
}

- (void).cxx_destruct;
- (id)_handlerForRequest:(id)arg1;
- (id)_routesForScheme:(id)arg1;
- (id)init;
- (void)performRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerHandler:(id)arg1 forScheme:(id)arg2 route:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

