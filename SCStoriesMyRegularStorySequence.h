//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCStoriesMyRegularStorySequence : SCDocObject <NSCopying>
{
    long long _myStoryIndex;
    NSArray *_storySnaps;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithMyStoryIndex:(long long)arg1 storySnaps:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long myStoryIndex; // @synthesize myStoryIndex=_myStoryIndex;
@property(readonly, copy, nonatomic) NSArray *storySnaps; // @synthesize storySnaps=_storySnaps;

@end
