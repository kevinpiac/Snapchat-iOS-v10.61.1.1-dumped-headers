//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSData, NSString;

@interface SCImpalaPublisherProfileViewModel : NSObject <SCComposerJsConvertible, NSCopying>
{
    _Bool _notificationsABTestEnabled;
    NSData *_encodedLaunchInfo;
    NSString *_accountServiceUrl;
    NSString *_bitmojiAvatarId;
    NSString *_sourcePageType;
    NSString *_pageEntryType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accountServiceUrl; // @synthesize accountServiceUrl=_accountServiceUrl;
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSData *encodedLaunchInfo; // @synthesize encodedLaunchInfo=_encodedLaunchInfo;
- (id)initWithEncodedLaunchInfo:(id)arg1 accountServiceUrl:(id)arg2 notificationsABTestEnabled:(_Bool)arg3 bitmojiAvatarId:(id)arg4 sourcePageType:(id)arg5 pageEntryType:(id)arg6;
@property(nonatomic) _Bool notificationsABTestEnabled; // @synthesize notificationsABTestEnabled=_notificationsABTestEnabled;
@property(copy, nonatomic) NSString *pageEntryType; // @synthesize pageEntryType=_pageEntryType;
@property(copy, nonatomic) NSString *sourcePageType; // @synthesize sourcePageType=_sourcePageType;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

