//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchQueryResult-Protocol.h"

@class NSArray, NSString, SCSearchQuery;

@interface SCSearchQueryResult : NSObject <SCSearchQueryResult>
{
    SCSearchQuery *_searchQuery;
    NSArray *_sectionDescriptors;
    long long _resultState;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchQuery:(id)arg1 sectionDescriptors:(id)arg2 resultState:(long long)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, nonatomic) long long resultState; // @synthesize resultState=_resultState;
@property(readonly, copy, nonatomic) SCSearchQuery *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(readonly, copy, nonatomic) NSArray *sectionDescriptors; // @synthesize sectionDescriptors=_sectionDescriptors;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

