//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSNumber, NSString, SCImpalaPublicProfileEntryInfo;

@interface SCImpalaPublisherProfileV2ViewModel : NSObject <SCComposerJsConvertible, NSCopying>
{
    _Bool _autoSubscribe;
    NSString *_businessProfileId;
    NSString *_showId;
    SCImpalaPublicProfileEntryInfo *_entryInfo;
    NSString *_bitmojiAvatarId;
    NSNumber *_extrasAbEnabled;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool autoSubscribe; // @synthesize autoSubscribe=_autoSubscribe;
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) SCImpalaPublicProfileEntryInfo *entryInfo; // @synthesize entryInfo=_entryInfo;
@property(retain, nonatomic) NSNumber *extrasAbEnabled; // @synthesize extrasAbEnabled=_extrasAbEnabled;
- (id)initWithBusinessProfileId:(id)arg1 showId:(id)arg2 entryInfo:(id)arg3 bitmojiAvatarId:(id)arg4 autoSubscribe:(_Bool)arg5;
- (id)initWithBusinessProfileId:(id)arg1 showId:(id)arg2 entryInfo:(id)arg3 bitmojiAvatarId:(id)arg4 autoSubscribe:(_Bool)arg5 extrasAbEnabled:(id)arg6;
@property(copy, nonatomic) NSString *showId; // @synthesize showId=_showId;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
