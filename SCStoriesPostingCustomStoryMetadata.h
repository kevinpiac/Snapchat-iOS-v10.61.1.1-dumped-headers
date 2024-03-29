//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesPostingCustomStoryMetadata : NSObject <NSCopying>
{
    _Bool _isInactive;
    NSString *_publicationId;
    long long _type;
    NSString *_displayName;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (unsigned long long)hash;
- (id)initWithPublicationId:(id)arg1 type:(long long)arg2 isInactive:(_Bool)arg3 displayName:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isInactive; // @synthesize isInactive=_isInactive;
@property(readonly, copy, nonatomic) NSString *publicationId; // @synthesize publicationId=_publicationId;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;

@end

