//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTAuth-Protocol.h"

@class NSString;

@interface SCTAuthImpl : NSObject <SCTAuth>
{
    NSString *_scopeId;
    NSString *_mac;
    NSString *_token;
}

+ (id)emptyAuth;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithScopeId:(id)arg1 mac:(id)arg2 token:(id)arg3;
@property(readonly) NSString *mac; // @synthesize mac=_mac;
@property(readonly) NSString *scopeId; // @synthesize scopeId=_scopeId;
@property(readonly) NSString *token; // @synthesize token=_token;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

