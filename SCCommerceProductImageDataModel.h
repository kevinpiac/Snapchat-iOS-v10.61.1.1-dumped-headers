//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSError, UIImage;

@interface SCCommerceProductImageDataModel : NSObject <NSCopying>
{
    _Bool _loaded;
    UIImage *_image;
    NSError *_error;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithImage:(id)arg1 loaded:(_Bool)arg2 error:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool loaded; // @synthesize loaded=_loaded;

@end

