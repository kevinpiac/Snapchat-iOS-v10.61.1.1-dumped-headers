//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCommerceProductImageOverlayImageModel : NSObject <NSCopying, NSCoding>
{
    NSString *_externalImageId;
    double _rotationAngle;
    struct CGSize _productImageSize;
    struct CGRect _frame;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *externalImageId; // @synthesize externalImageId=_externalImageId;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalImageId:(id)arg1 productImageSize:(struct CGSize)arg2 frame:(struct CGRect)arg3 rotationAngle:(double)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct CGSize productImageSize; // @synthesize productImageSize=_productImageSize;
@property(readonly, nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;

@end
