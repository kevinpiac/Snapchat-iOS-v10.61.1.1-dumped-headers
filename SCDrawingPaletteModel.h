//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface SCDrawingPaletteModel : NSObject
{
    NSArray *_paletteSwitchIcons;
    NSDictionary *_gradientColorsForPaletteTypes;
    long long _numPalettes;
    unsigned long long _colorPickerVersion;
    unsigned long long _currentPaletteType;
}

+ (id)createWithColorPickerVersion:(unsigned long long)arg1;
+ (id)paletteIdFromType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_createGradientColorsForPaletteType:(unsigned long long)arg1;
- (id)_gradientColorsForPaletteType:(unsigned long long)arg1;
- (id)_paletteIconForPaletteType:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long colorPickerVersion; // @synthesize colorPickerVersion=_colorPickerVersion;
@property(nonatomic) unsigned long long currentPaletteType; // @synthesize currentPaletteType=_currentPaletteType;
- (id)gradientColorsForCurrentPalette;
- (id)initWithColorPickerVersion:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long nextPaletteType;
- (id)paletteIconForCurrentPalette;
- (void)togglePalette;

@end
