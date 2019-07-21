//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, SCLensResource;

@interface SCLensResourceContainer : NSObject <NSCopying, NSCoding>
{
    SCLensResource *_currentResource;
    NSArray *_allResources;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *allResources; // @synthesize allResources=_allResources;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCLensResource *currentResource; // @synthesize currentResource=_currentResource;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentResource:(id)arg1 allResources:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end

