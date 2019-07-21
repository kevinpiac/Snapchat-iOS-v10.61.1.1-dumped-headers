//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCStatusMessageChatCellViewConfig-Protocol.h"

@class NSAttributedString;

@interface SCChatMergedStatusContentViewModel : NSObject <SCStatusMessageChatCellViewConfig, NSCopying>
{
    NSAttributedString *_attributedStatusText;
    double _topMargin;
    double _height;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSAttributedString *attributedStatusText; // @synthesize attributedStatusText=_attributedStatusText;
- (id)attributedTextForStatusMessageLabel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
- (double)heightForStatusMessageLabel;
- (id)initWithAttributedStatusText:(id)arg1 topMargin:(double)arg2 height:(double)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
- (double)topMarginForStatusMessageLabel;

@end
