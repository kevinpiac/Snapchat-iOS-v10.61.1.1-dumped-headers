//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTV3CallRequest-Protocol.h"

@class NSNumber, NSString;

@interface SCTV3CallRequest : NSObject <SCTV3CallRequest>
{
    NSString *_convoId;
    NSNumber *_action;
    unsigned long long _media;
    NSString *_talkCorePayload;
}

- (void).cxx_destruct;
- (id)_stringFromAction:(id)arg1;
- (_Bool)_validAction:(unsigned long long)arg1;
- (_Bool)_validMedia:(unsigned long long)arg1;
- (unsigned long long)action;
- (id)convoId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)hasAction;
- (id)initWithConvoId:(id)arg1 action:(unsigned long long)arg2 media:(unsigned long long)arg3 talkCorePayload:(id)arg4;
- (id)initWithConvoId:(id)arg1 talkCorePayload:(id)arg2;
- (unsigned long long)media;
- (id)talkCorePayload;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

