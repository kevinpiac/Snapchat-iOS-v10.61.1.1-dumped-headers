//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSString, SCCBitmojiInfo;

@interface SCCUser : NSObject <SCComposerJsConvertible, NSCopying>
{
    _Bool _isPopular;
    _Bool _isOfficial;
    NSString *_userId;
    NSString *_username;
    NSString *_displayName;
    SCCBitmojiInfo *_bitmojiInfo;
    NSString *_businessProfileId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCCBitmojiInfo *bitmojiInfo; // @synthesize bitmojiInfo=_bitmojiInfo;
@property(copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithSCSnapchatter:(id)arg1;
- (id)initWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 isPopular:(_Bool)arg4 isOfficial:(_Bool)arg5 bitmojiInfo:(id)arg6 businessProfileId:(id)arg7;
@property(nonatomic) _Bool isOfficial; // @synthesize isOfficial=_isOfficial;
@property(nonatomic) _Bool isPopular; // @synthesize isPopular=_isPopular;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

