//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesUnlockableContext-Protocol.h"

@class NSArray, NSString;

@interface SOJUUnlockablesUnlockableContext : NSObject <SOJUUnlockablesUnlockableContext>
{
    NSArray *_triggerContexts;
    NSArray *_friendContexts;
    NSArray *_cameraContexts;
    NSArray *_mediaTypeContexts;
    NSArray *_actionmojiContexts;
    NSArray *_visualContexts;
    NSArray *_lensApplicableContexts;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *actionmojiContexts; // @synthesize actionmojiContexts=_actionmojiContexts;
@property(readonly, copy, nonatomic) NSArray *cameraContexts; // @synthesize cameraContexts=_cameraContexts;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *friendContexts; // @synthesize friendContexts=_friendContexts;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithTriggerContexts:(id)arg1 friendContexts:(id)arg2 cameraContexts:(id)arg3 mediaTypeContexts:(id)arg4 actionmojiContexts:(id)arg5 visualContexts:(id)arg6 lensApplicableContexts:(id)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *lensApplicableContexts; // @synthesize lensApplicableContexts=_lensApplicableContexts;
@property(readonly, copy, nonatomic) NSArray *mediaTypeContexts; // @synthesize mediaTypeContexts=_mediaTypeContexts;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSArray *triggerContexts; // @synthesize triggerContexts=_triggerContexts;
@property(readonly, copy, nonatomic) NSArray *visualContexts; // @synthesize visualContexts=_visualContexts;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

