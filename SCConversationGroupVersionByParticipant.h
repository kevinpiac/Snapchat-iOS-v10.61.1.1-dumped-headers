//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCConversationGroupVersionByParticipant : NSObject <NSCopying>
{
    NSString *_userId;
    unsigned long long _groupVersion;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long groupVersion; // @synthesize groupVersion=_groupVersion;
- (unsigned long long)hash;
- (id)initWithUserId:(id)arg1 groupVersion:(unsigned long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;

@end

