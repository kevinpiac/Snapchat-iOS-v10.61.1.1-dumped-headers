//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString;

@interface SCOperaWebAppChatHeaderViewModel : NSObject <NSCopying>
{
    NSAttributedString *_primaryText;
    NSAttributedString *_subText;
    double _topPadding;
    double _height;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
- (id)initWithPrimaryText:(id)arg1 subText:(id)arg2 topPadding:(double)arg3 height:(double)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSAttributedString *primaryText; // @synthesize primaryText=_primaryText;
@property(readonly, copy, nonatomic) NSAttributedString *subText; // @synthesize subText=_subText;
@property(readonly, nonatomic) double topPadding; // @synthesize topPadding=_topPadding;

@end

