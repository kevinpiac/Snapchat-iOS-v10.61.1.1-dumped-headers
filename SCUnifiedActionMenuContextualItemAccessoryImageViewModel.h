//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCActionModel;

@interface SCUnifiedActionMenuContextualItemAccessoryImageViewModel : NSObject <NSCopying>
{
    NSString *_assetName;
    SCActionModel *_actionModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCActionModel *actionModel; // @synthesize actionModel=_actionModel;
@property(readonly, copy, nonatomic) NSString *assetName; // @synthesize assetName=_assetName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAssetName:(id)arg1 actionModel:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end

