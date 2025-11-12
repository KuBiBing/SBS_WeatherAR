using UnrealBuildTool;

public class Election_Network : ModuleRules
{
    public Election_Network(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core"
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "CoreUObject",
            "Engine",
            "Slate",
            "SlateCore",
            "Sockets",
            "Networking",
            "Json",
            "JsonUtilities"
        });
    }
}
