//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCActionModel, SCNetworkImage, SCUnifiedActionMenuContextualItemAccessoryViewModel;

@interface SCUnifiedActionMenuContextualItemViewModel : NSObject <NSCopying>
{
    NSString *_title;
    NSString *_descriptionText;
    SCNetworkImage *_thumbnail;
    SCUnifiedActionMenuContextualItemAccessoryViewModel *_accessoryViewModel;
    SCActionModel *_thumbnailActionModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCUnifiedActionMenuContextualItemAccessoryViewModel *accessoryViewModel; // @synthesize accessoryViewModel=_accessoryViewModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 descriptionText:(id)arg2 thumbnail:(id)arg3 accessoryViewModel:(id)arg4 thumbnailActionModel:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCNetworkImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, copy, nonatomic) SCActionModel *thumbnailActionModel; // @synthesize thumbnailActionModel=_thumbnailActionModel;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

