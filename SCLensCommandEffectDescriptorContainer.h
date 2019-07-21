//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCLensCommandCompositeEffectDescriptor, SCLensCommandEffectDescriptor;

@interface SCLensCommandEffectDescriptorContainer : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCLensCommandEffectDescriptor *_descriptor_descriptor;
    SCLensCommandCompositeEffectDescriptor *_compositeDescriptor_compositeDescriptor;
}

+ (id)compositeDescriptorWithCompositeDescriptor:(id)arg1;
+ (id)descriptorWithDescriptor:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchDescriptor:(CDUnknownBlockType)arg1 compositeDescriptor:(CDUnknownBlockType)arg2;

@end

