//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesSnapIdentifier : NSObject <NSCopying>
{
    NSString *_storyId;
    NSString *_clientId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithStoryId:(id)arg1 clientId:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;

@end

