//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSString;

@interface SCCBitmojiInfo : NSObject <SCComposerJsConvertible, NSCopying>
{
    NSString *_avatarId;
    NSString *_selfieId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *avatarId; // @synthesize avatarId=_avatarId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAvatarId:(id)arg1 selfieId:(id)arg2;
@property(copy, nonatomic) NSString *selfieId; // @synthesize selfieId=_selfieId;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

