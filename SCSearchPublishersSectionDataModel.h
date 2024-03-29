//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SCSearchQuery;

@interface SCSearchPublishersSectionDataModel : NSObject <NSCopying>
{
    _Bool _isRemote;
    SCSearchQuery *_searchQuery;
    NSArray *_publishers;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithSearchQuery:(id)arg1 publishers:(id)arg2 isRemote:(_Bool)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isRemote; // @synthesize isRemote=_isRemote;
@property(readonly, copy, nonatomic) NSArray *publishers; // @synthesize publishers=_publishers;
@property(readonly, copy, nonatomic) SCSearchQuery *searchQuery; // @synthesize searchQuery=_searchQuery;

@end

