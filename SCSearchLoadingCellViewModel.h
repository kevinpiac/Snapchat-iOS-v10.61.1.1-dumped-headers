//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCSearchLoadingCellViewModel : NSObject <NSCopying>
{
    long long _contentMode;
    NSArray *_loadingItems;
    struct UIEdgeInsets _edgeInsets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (unsigned long long)hash;
- (id)initWithEdgeInsets:(struct UIEdgeInsets)arg1 contentMode:(long long)arg2 loadingItems:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *loadingItems; // @synthesize loadingItems=_loadingItems;

@end

