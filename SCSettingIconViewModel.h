//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSettingIconViewModel : NSObject <NSCopying>
{
    _Bool _isLoading;
    NSString *_imageName;
    struct CGSize _iconSize;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(readonly, copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)initWithImageName:(id)arg1 iconSize:(struct CGSize)arg2 contentInsets:(struct UIEdgeInsets)arg3 isLoading:(_Bool)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;

@end

